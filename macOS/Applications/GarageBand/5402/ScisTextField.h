//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MAToolKit/MATextField.h>

#import "ScDlogSlave-Protocol.h"

@class ScisController;

@interface ScisTextField : MATextField <ScDlogSlave>
{
    ScisController *m_scisController2;
    long long m_rowIndex3;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateDlogController;
- (void)setScisController:(id)arg1;
- (long long)fullNameRowIndex;
- (void)setFullNameRowIndex:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

