//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface iTermFlexibleView : NSView
{
    BOOL _isFlipped;
    NSColor *_color;
}

@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)isFlipped;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;

@end

