/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class Delay_not_dumbAudioProcessorEditor  : public AudioProcessorEditor,
											public Slider::Listener
{
public:
    Delay_not_dumbAudioProcessorEditor (Delay_not_dumbAudioProcessor&);
    ~Delay_not_dumbAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
	void sliderValueChanged(Slider *slider) override;
	Slider gainSlider;
private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Delay_not_dumbAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Delay_not_dumbAudioProcessorEditor)
};
