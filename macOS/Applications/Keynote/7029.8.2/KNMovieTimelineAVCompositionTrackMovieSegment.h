//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface KNMovieTimelineAVCompositionTrackMovieSegment : NSObject <NSCopying>
{
    id _movieIdentifier;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) id movieIdentifier; // @synthesize movieIdentifier=_movieIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithMovieIdentifier:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end

