//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKValueTemplateTag.h"

@class NSArray, NSAttributedString;

__attribute__((visibility("hidden")))
@interface SKRichCollectionTemplateTag : SKValueTemplateTag
{
    NSAttributedString *itemTemplateAttributedString;
    NSAttributedString *separatorTemplateAttributedString;
    NSArray *itemTemplate;
    NSArray *separatorTemplate;
}

@property(readonly, nonatomic) NSArray *separatorTemplate; // @dynamic separatorTemplate;
@property(readonly, nonatomic) NSArray *itemTemplate; // @dynamic itemTemplate;
- (long long)type;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 itemTemplateAttributedString:(id)arg2 separatorTemplateAttributedString:(id)arg3;

@end

