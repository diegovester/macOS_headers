//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAVReadState.h"

@class NSMutableDictionary, WDParagraph, WXReadState;

@interface WXOAVReadState : OAVReadState
{
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
    WXReadState *_wxReadState;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WXReadState *wxReadState; // @synthesize wxReadState=_wxReadState;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)currentParagraph;
- (id)initWithWXReadState:(id)arg1;

@end

