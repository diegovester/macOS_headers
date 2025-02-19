//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETSlideState, TSUMutableRetainedPointerSet, TSUNoCopyDictionary, TSUPointerKeyDictionary;

@interface PETBuildState : NSObject
{
    TSUNoCopyDictionary *mBuildMap;
    TSUNoCopyDictionary *mGroupIdMap;
    TSUNoCopyDictionary *mBuildByGroupMap;
    TSUPointerKeyDictionary *mMotionPathBuildMap;
    TSUMutableRetainedPointerSet *mMappedTableBuilds;
    TSUMutableRetainedPointerSet *mUnbalancedParagraphBuilds;
    TSUMutableRetainedPointerSet *mMappedAllAtOnceBuilds;
    TSUMutableRetainedPointerSet *mUnbalancedChartBuilds;
    TSUMutableRetainedPointerSet *mParagraphBuildAnimateBackground;
    TSUNoCopyDictionary *mChartBuildInsertAllAtOnceMap;
    TSUPointerKeyDictionary *mDrawableScaleMap;
    unsigned int mGroupId;
    PETSlideState *_slideState;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PETSlideState *slideState; // @synthesize slideState=_slideState;
@property(readonly, nonatomic) TSUPointerKeyDictionary *drawableScaleMap; // @synthesize drawableScaleMap=mDrawableScaleMap;
@property(retain, nonatomic) TSUNoCopyDictionary *chartBuildInsertAllAtOnceMap; // @synthesize chartBuildInsertAllAtOnceMap=mChartBuildInsertAllAtOnceMap;
@property(retain, nonatomic) TSUMutableRetainedPointerSet *paragraphBuildAnimateBackground; // @synthesize paragraphBuildAnimateBackground=mParagraphBuildAnimateBackground;
@property(retain, nonatomic) TSUMutableRetainedPointerSet *unbalancedChartBuilds; // @synthesize unbalancedChartBuilds=mUnbalancedChartBuilds;
@property(retain, nonatomic) TSUMutableRetainedPointerSet *mappedAllAtOnceBuilds; // @synthesize mappedAllAtOnceBuilds=mMappedAllAtOnceBuilds;
@property(retain, nonatomic) TSUMutableRetainedPointerSet *unbalancedParagraphBuilds; // @synthesize unbalancedParagraphBuilds=mUnbalancedParagraphBuilds;
@property(retain, nonatomic) TSUMutableRetainedPointerSet *mappedTableBuilds; // @synthesize mappedTableBuilds=mMappedTableBuilds;
@property(retain, nonatomic) TSUNoCopyDictionary *motionPathBuildMap; // @synthesize motionPathBuildMap=mMotionPathBuildMap;
@property(retain, nonatomic) TSUNoCopyDictionary *buildByGroupMap; // @synthesize buildByGroupMap=mBuildByGroupMap;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=mGroupId;
@property(retain, nonatomic) TSUNoCopyDictionary *buildMap; // @synthesize buildMap=mBuildMap;
- (id)groupIdForDrawable:(id)arg1 buildType:(int)arg2 knBuild:(id)arg3;
- (id)initWithSlideState:(id)arg1;

@end

