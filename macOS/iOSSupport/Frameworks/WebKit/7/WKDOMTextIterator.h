//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKDOMRange;

@interface WKDOMTextIterator : NSObject
{
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator>> _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _upconvertedText;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) unsigned long long currentTextLength;
@property(readonly) const unsigned short *currentTextPointer;
@property(readonly) WKDOMRange *currentRange;
@property(readonly) BOOL atEnd;
- (void)advance;
- (id)initWithRange:(id)arg1;

@end

