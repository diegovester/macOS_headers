//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNBuildRenderer, KNSlideNode, TSDTextureSet;

@interface KNContentAwareTextureGeneratorBuildRenderer : NSObject
{
    BOOL _isAtEndOfBuild;
    KNBuildRenderer *_renderer;
    TSDTextureSet *_ts;
    KNSlideNode *_slideNode;
}

@property(nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
@property(nonatomic) BOOL isAtEndOfBuild; // @synthesize isAtEndOfBuild=_isAtEndOfBuild;
@property(nonatomic) TSDTextureSet *ts; // @synthesize ts=_ts;
@property(nonatomic) KNBuildRenderer *renderer; // @synthesize renderer=_renderer;

@end

