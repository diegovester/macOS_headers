//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHACoreDuetDatasetStorage : NSObject
{
    id <_DKKnowledgeSaving><_DKKnowledgeQuerying> _knowledgeStore;
}

@property(readonly, nonatomic) id <_DKKnowledgeSaving><_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void).cxx_destruct;
- (id)_getEventStreamForDatasetName:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)samplesForDataset:(id)arg1;
- (void)addSample:(id)arg1 toDataset:(id)arg2;
- (id)init;

@end

