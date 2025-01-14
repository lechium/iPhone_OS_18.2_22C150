//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MSCollection, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UserCollectionHandler
{
    NSString *_stagedTitle;	// 8 = 0x8
    struct os_unfair_lock_s _modficationLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_contentRebuildQueue;	// 24 = 0x18
    long long _modificationCount;	// 32 = 0x20
    _Bool _needsToBePersisted;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000613ed1
@property(nonatomic) _Bool needsToBePersisted; // @synthesize needsToBePersisted=_needsToBePersisted;
- (int)showAction;	// IMP=0x0010000000613e60
- (void)updateCollection:(CDUnknownBlockType)arg1;	// IMP=0x0010000000613cdc
- (_Bool)containsItem:(id)arg1;	// IMP=0x0010000000613c92
- (void)updateTitle:(id)arg1 forMapItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000613ace
- (void)updateWithMapsSyncCollection:(id)arg1;	// IMP=0x0010000000613aa0
- (void)rebuildContent;	// IMP=0x001000000061391e
- (void)removeObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000612da4
- (void)addObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006125a0
- (_Bool)updateImage:(id)arg1;	// IMP=0x001000000061238e
- (_Bool)updateTitle:(id)arg1;	// IMP=0x00100000006122ec
- (long long)contentType;	// IMP=0x00100000006122e1
- (_Bool)canDeleteContent;	// IMP=0x00100000006122d9
- (_Bool)canAddContent;	// IMP=0x00100000006122d1
- (_Bool)canEditTitle;	// IMP=0x0010000000612289
- (_Bool)canEditImage;	// IMP=0x0010000000612281
- (_Bool)canDelete;	// IMP=0x0010000000612239
- (void)setStagedTitle:(id)arg1;	// IMP=0x0010000000612225
- (id)stagedTitle;	// IMP=0x0010000000612210
- (id)title;	// IMP=0x001000000061217e
- (id)identifier;	// IMP=0x0010000000612104
- (id)sharingURL;	// IMP=0x00100000006120f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000612042
- (long long)handlerType;	// IMP=0x001000000061203a
- (_Bool)beingModified;	// IMP=0x0010000000612000
- (void)endModification;	// IMP=0x0010000000611fcd
- (void)startModification;	// IMP=0x0010000000611f9a
@property(readonly) MSCollection *collectionAsMapsSyncCollection;
- (void)setCollection:(id)arg1;	// IMP=0x0010000000611bb9
- (id)initWithCollection:(id)arg1;	// IMP=0x0010000000611958

@end

