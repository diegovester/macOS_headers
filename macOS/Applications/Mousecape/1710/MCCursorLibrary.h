//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MCLibraryController, NSArray, NSMutableSet, NSNumber, NSString, NSURL, NSUndoManager;

@interface MCCursorLibrary : NSObject <NSCopying>
{
    BOOL _inCloud;
    BOOL _hiDPI;
    NSString *_name;
    NSString *_author;
    NSString *_identifier;
    NSNumber *_version;
    NSURL *_fileURL;
    MCLibraryController *_library;
    NSUndoManager *_undoManager;
    NSMutableSet *_cursors;
    unsigned long long _changeCount;
    unsigned long long _lastChangeCount;
    NSArray *_observers;
    NSString *_oldIdentifier;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)cursorLibraryWithCursors:(id)arg1;
+ (id)cursorLibraryWithDictionary:(id)arg1;
+ (id)cursorLibraryWithContentsOfURL:(id)arg1;
+ (id)cursorLibraryWithContentsOfFile:(id)arg1;
+ (id)cursorUndoProperties;
+ (id)undoProperties;
@property(copy, nonatomic) NSString *oldIdentifier; // @synthesize oldIdentifier=_oldIdentifier;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long lastChangeCount; // @synthesize lastChangeCount=_lastChangeCount;
@property(nonatomic) unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain, nonatomic) NSMutableSet *cursors; // @synthesize cursors=_cursors;
@property(nonatomic, getter=isHiDPI) BOOL hiDPI; // @synthesize hiDPI=_hiDPI;
@property(nonatomic, getter=isInCloud) BOOL inCloud; // @synthesize inCloud=_inCloud;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(nonatomic) __weak MCLibraryController *library; // @synthesize library=_library;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
@property(readonly, nonatomic, getter=isDirty) BOOL dirty; // @dynamic dirty;
- (void)revertToSaved;
- (void)updateChangeCount:(unsigned long long)arg1;
- (id)save;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)dictionaryRepresentation;
- (void)removeCursorsWithIdentifier:(id)arg1;
- (void)removeCursor:(id)arg1;
- (void)addCursor:(id)arg1;
- (id)cursorsWithIdentifier:(id)arg1;
- (void)addCursorsFromDictionary:(id)arg1 ofVersion:(double)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingCursor:(id)arg1;
- (void)startObservingCursor:(id)arg1;
- (void)stopObservingProperties;
- (void)startObservingProperties;
- (void)dealloc;
- (BOOL)_readFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCursors:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end

