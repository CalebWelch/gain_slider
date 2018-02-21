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
	setSize (400, 300);
	gainSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
	gainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 200, 100);
	gainSlider.setRange(0.0, 1.0);
	gainSlider.setValue(.5);
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
		processor.raw_volume = gainSlider.getValue();
	}

}