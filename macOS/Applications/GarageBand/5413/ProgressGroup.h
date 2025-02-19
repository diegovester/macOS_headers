//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ProgressGroupView;
@protocol MATkProgressGroupClient;

@interface ProgressGroup : NSObject
{
    ProgressGroupView *mProgressGroupView;
    id <MATkProgressGroupClient> mClient;
    struct map<unsigned long, ProgressBarInfo, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, ProgressBarInfo>>> *mPBarMap;
    unsigned long long mMouseTarget;
    unsigned long long mLastVisibleProgress;
}

- (void)setAccessoryView:(id)arg1;
- (BOOL)setProgressBarVisibleOnNextUpdate:(unsigned long long)arg1;
- (BOOL)setVisibility:(BOOL)arg1 forProgressBar:(unsigned long long)arg2;
- (id)progressGroupView;
- (void)updateGroupViewContent;
- (BOOL)setProgressInfo:(id)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)setIconType:(long long)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)setLabel:(id)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)setIndeterminate:(BOOL)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)setProgress:(double)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)setMinValue:(double)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)setMaxValue:(double)arg1 forProgressBar:(unsigned long long)arg2;
- (void)setClient:(id)arg1;
- (BOOL)getProgress:(double *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)progressBarExists:(unsigned long long)arg1;
- (BOOL)getProgressInfo:(id *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getIconType:(long long *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getLabel:(id *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getMinValue:(double *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getMaxValue:(double *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getVisibility:(char *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getIsIndeterminate:(char *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)getFractionalProgress:(double *)arg1 forProgressBar:(unsigned long long)arg2;
- (BOOL)removeProgressBar:(unsigned long long)arg1;
- (void)removeAllProgressBars;
- (unsigned long long)createProgressBar;
- (unsigned long long)lastVisibleProgressBar;
- (void)getVisibleSortedByIconProgressBars:(unsigned long long **)arg1 count:(unsigned long long *)arg2 row:(unsigned long long)arg3 isFirstRowOfGroup:(char *)arg4 isLastRowOfGroup:(char *)arg5;
- (void)getVisibleProgressBars:(unsigned long long **)arg1 count:(unsigned long long *)arg2;
- (unsigned long long)countVisibleProgressBars;
- (unsigned long long)countProgressBars;
- (id)client;
- (void)dealloc;
- (id)init;

@end

