//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDOfficeArt, WITTextState;

@interface WITSectionDrawable : NSObject
{
    WDOfficeArt *mWdOfficeArt;
    WITTextState *mState;
}

- (void).cxx_destruct;
- (long long)compareByZIndex:(id)arg1;
- (id)state;
- (id)officeArt;
- (id)initWithOfficeArt:(id)arg1 textState:(id)arg2;

@end

