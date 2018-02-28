/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
Delay_not_dumbAudioProcessorEditor::Delay_not_dumbAudioProcessorEditor (Delay_not_dumbAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
	setSize (200, 400);
	gainSliderAttach = new AudioProcessorValueTreeState::SliderAttachment(processor.state_tree,GAIN_ID, gainSlider);
	gainSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	gainSlider.setRange(-48.0, 0.0);
	gainSlider.addListener(this);
	addAndMakeVisible(gainSlider);

}

Delay_not_dumbAudioProcessorEditor::~Delay_not_dumbAudioProcessorEditor()
{
}

//==============================================================================
void Delay_not_dumbAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
}

void Delay_not_dumbAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
	gainSlider.setBounds(getLocalBounds());
}
void Delay_not_dumbAudioProcessorEditor::sliderValueChanged(Slider *slider) {
	
	if (slider == &gainSlider){
		processor.raw_volume = pow(10, gainSlider.getValue() / 20);
	}

}