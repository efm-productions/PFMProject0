/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Pfmproject0AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Pfmproject0AudioProcessorEditor (Pfmproject0AudioProcessor&);
    ~Pfmproject0AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    // add 2 memberfunction declarations for handling mouse events
    void mouseDown(const MouseEvent& e) override;
    void mouseUp(const MouseEvent& e) override;
    //============================================================

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Pfmproject0AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pfmproject0AudioProcessorEditor)
};
