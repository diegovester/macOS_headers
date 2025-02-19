//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class TPPageMaster;

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator
{
    TPPageMaster *_pageMaster;
    long long _fragmentIndex;
    long long _headerFooterType;
}

- (void).cxx_destruct;
@property(nonatomic) long long headerFooterType; // @synthesize headerFooterType=_headerFooterType;
@property(nonatomic) long long fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(retain, nonatomic) TPPageMaster *pageMaster; // @synthesize pageMaster=_pageMaster;
- (void)p_incrementHeaderFooterType;
- (void)p_incrementFragmentIndex;
- (id)nextObject;
- (id)initWithPageMaster:(id)arg1;

@end

