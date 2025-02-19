//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSKit/TSKSelection.h>

@class TNSheet;

@interface TNSheetSelection : TSKSelection
{
    BOOL mIsPaginated;
    TNSheet *mSheet;
}

+ (id)selectionForSheet:(id)arg1 paginated:(BOOL)arg2;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic, getter=isPaginated) BOOL paginated; // @synthesize paginated=mIsPaginated;
@property(readonly, retain, nonatomic) TNSheet *sheet; // @synthesize sheet=mSheet;
- (id)UUIDDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSheet:(id)arg1 paginated:(BOOL)arg2;

@end

