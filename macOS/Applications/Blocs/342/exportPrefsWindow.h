//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSView;

@interface exportPrefsWindow : NSWindowController
{
    NSView *mainView;
    NSButton *minifyHTML;
    NSButton *minifyStyleSheet;
    NSButton *minifyBootstrap;
    NSButton *minifyJquery;
    NSButton *minifyBlocsJS;
    NSButton *minifyAnimate;
    NSButton *cacheBustCheck;
    NSButton *lazyLoad;
    NSButton *cleanURLCheck;
    BOOL _htmlVal;
    BOOL _stylesheetVal;
    BOOL _bootstrapVal;
    BOOL _jqueryVal;
    BOOL _blocsJSVal;
    BOOL _animateVal;
    BOOL _cacheBustVal;
    BOOL _lazyLoadVal;
    BOOL _cleanURLVal;
}

@property BOOL cleanURLVal; // @synthesize cleanURLVal=_cleanURLVal;
@property BOOL lazyLoadVal; // @synthesize lazyLoadVal=_lazyLoadVal;
@property BOOL cacheBustVal; // @synthesize cacheBustVal=_cacheBustVal;
@property BOOL animateVal; // @synthesize animateVal=_animateVal;
@property BOOL blocsJSVal; // @synthesize blocsJSVal=_blocsJSVal;
@property BOOL jqueryVal; // @synthesize jqueryVal=_jqueryVal;
@property BOOL bootstrapVal; // @synthesize bootstrapVal=_bootstrapVal;
@property BOOL stylesheetVal; // @synthesize stylesheetVal=_stylesheetVal;
@property BOOL htmlVal; // @synthesize htmlVal=_htmlVal;
- (void).cxx_destruct;
- (void)closeSheet:(id)arg1;
- (void)exportProject:(id)arg1;
- (void)windowDidLoad;

@end

