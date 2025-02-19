//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface KeyCombo : NSObject <NSCopying, NSCoding>
{
    unsigned short mKeyCode;
    unsigned long long mModifiers;
}

+ (id)_stringForKeyCode:(unsigned short)arg1 modifiers:(unsigned long long)arg2;
+ (id)_stringForModifiers:(unsigned long long)arg1;
+ (id)keyComboWithKeyCode:(unsigned short)arg1 andModifiers:(unsigned long long)arg2;
+ (id)clearKeyCombo;
+ (id)keyCombo;
+ (void)initialize;
@property unsigned long long modifiers; // @synthesize modifiers=mModifiers;
@property unsigned short keyCode; // @synthesize keyCode=mKeyCode;
- (id)alternateShiftKeyEquivalent;
- (id)keyEquivalent;
- (id)userDisplayRepresentation;
- (BOOL)isValid;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithKeyCode:(unsigned short)arg1 andModifiers:(unsigned long long)arg2;

@end

