//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBTextBlock : NSObject
{
}

+ (void)writeTextBody:(id)arg1 textBoxParentHolder:(id)arg2 startIndexInParent:(unsigned long long)arg3 bulletStyleAtom:(struct PptTextBlockStyling9Atom *)arg4 textRulerAtom:(struct PptTextRulerAtom *)arg5 masterTextStyleAtom:(struct PptTextMasterStyleAtom *)arg6 masterBulletStyleAtom:(struct PptTextMasterStyle9Atom *)arg7 state:(id)arg8;
+ (void)writeHyperlink:(id)arg1 textBoxParentHolder:(id)arg2 insertIndexInParent:(unsigned long long)arg3 counter:(unsigned long long *)arg4 charRange:(struct _NSRange)arg5 instance:(int)arg6 state:(id)arg7;
+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;
+ (void)applyTextRuler:(struct PptTextRulerAtom *)arg1 toTextBlock:(id)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString *)arg2 textType:(int)arg3 state:(id)arg4;
+ (void)readFromStyledText:(struct __CFAttributedString *)arg1 toStyledPargraphs:(struct __CFArray *)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString *)arg2;

@end

