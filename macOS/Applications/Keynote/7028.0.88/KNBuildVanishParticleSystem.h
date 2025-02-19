//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDGPUParticleSystem.h>

@interface KNBuildVanishParticleSystem : TSDGPUParticleSystem
{
    double _randomParticleSpeedMax;
    CDStruct_083b1a49 _lifeSpan;
    double _maxSpeed;
    double _maxScale;
    double _minScale;
}

@property(nonatomic) double minScale; // @synthesize minScale=_minScale;
@property(nonatomic) double maxScale; // @synthesize maxScale=_maxScale;
@property(nonatomic) double maxSpeed; // @synthesize maxSpeed=_maxSpeed;
@property(nonatomic) CDStruct_b2fbf00d lifeSpan; // @synthesize lifeSpan=_lifeSpan;
@property(nonatomic) double randomParticleSpeedMax; // @synthesize randomParticleSpeedMax=_randomParticleSpeedMax;
- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (double)scaleAtIndexPoint:(struct CGPoint)arg1;
- (double)speedMax;
- (CDStruct_869f9c67)speedAtIndexPoint:(struct CGPoint)arg1;

@end

