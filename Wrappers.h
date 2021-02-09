#pragma once

#include <memory>

struct HarmonicSet;
struct HarmonicSetWrapper
{
    HarmonicSetWrapper(HarmonicSet* hs);
    ~HarmonicSetWrapper();
    HarmonicSet* hsPtr = nullptr;
};

struct Distortion;
struct DistortionWrapper
{
    DistortionWrapper(Distortion* d);
    ~DistortionWrapper();
    Distortion* dPtr = nullptr;
};

struct PatternGenerator;
struct PatternGeneratorWrapper
{
    PatternGeneratorWrapper(PatternGenerator* pg);
    ~PatternGeneratorWrapper();
    PatternGenerator* pgPtr = nullptr;
};

struct PatternPlayer;
struct PatternPlayerWrapper
{
    PatternPlayerWrapper(PatternPlayer* pp);
    ~PatternPlayerWrapper();
    PatternPlayer* ppPtr = nullptr;
};

struct NoiseMaker;
struct NoiseMakerWrapper
{
    NoiseMakerWrapper(NoiseMaker* nm);
    ~NoiseMakerWrapper();
    NoiseMaker* nmPtr = nullptr;
};
