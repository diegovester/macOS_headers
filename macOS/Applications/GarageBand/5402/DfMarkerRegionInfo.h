//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DfMarkerRegionInfo : NSObject
{
    unsigned int m_cutLeft:1;
    unsigned int m_cutRight:1;
    unsigned int m_needsCopy:1;
    CDStruct_ae571156 m_regionID;
    long long m_startClock;
}

- (void)setNeedsCopy:(BOOL)arg1;
- (BOOL)needsCopy;
- (BOOL)doesOverlapRight;
- (BOOL)doesOverlapLeft;
- (BOOL)doesOverlap;
- (CDStruct_ae571156)regionID;
- (id)initWithRegion:(id)arg1 startClock:(long long)arg2 endClock:(long long)arg3;

@end

