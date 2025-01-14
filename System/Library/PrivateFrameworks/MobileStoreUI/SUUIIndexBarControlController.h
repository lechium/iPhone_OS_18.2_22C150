//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, SUUIIndexBarControl, SUUIIndexBarEntryDescriptor, SUUIResourceLoader;
@protocol SUUIIndexBarControlControllerDataSource, SUUIIndexBarControlControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIIndexBarControlController : NSObject
{
    SUUIIndexBarEntryDescriptor *_combinedEntryDescriptor;	// 8 = 0x8
    NSMapTable *_entryDescriptorToCachedEntry;	// 16 = 0x10
    _Bool _hasValidCombinedEntryDescriptor;	// 24 = 0x18
    NSMapTable *_indexPathToEntryDescriptor;	// 32 = 0x20
    NSMapTable *_requestIDToDescriptors;	// 40 = 0x28
    struct {
        unsigned int dataSourceRespondsToCombinedEntry:1;
        unsigned int dataSourceRespondsToNumberOfSections:1;
        unsigned int delegateRespondsToDidSelectEntryAtIndexPath:1;
        unsigned int delegateRespondsToDidSelectBeyondBottom:1;
        unsigned int delegateRespondsToDidSelectBeyondTop:1;
    } _dataSourceDelegateFlags;	// 48 = 0x30
    id <SUUIIndexBarControlControllerDataSource> _dataSource;	// 56 = 0x38
    id <SUUIIndexBarControlControllerDelegate> _delegate;	// 64 = 0x40
    SUUIIndexBarControl *_indexBarControl;	// 72 = 0x48
    SUUIResourceLoader *_resourceLoader;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002a2ba4
@property(retain, nonatomic) SUUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) SUUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(nonatomic) __weak id <SUUIIndexBarControlControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SUUIIndexBarControlControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_URLForEntryDescriptor:(id)arg1;	// IMP=0x00000000002a2b00
- (void)_updateCachedEntry:(id)arg1 forEntryDescriptor:(id)arg2;	// IMP=0x00000000002a2865
- (id)_placeholderEntryForEntryDescriptor:(id)arg1;	// IMP=0x00000000002a2830
- (void)_loadEntryForEntryDescriptor:(id)arg1;	// IMP=0x00000000002a25eb
- (void)_finishLoadForRequestID:(id)arg1 withResultingImage:(id)arg2;	// IMP=0x00000000002a2346
- (id)_entryForEntryDescriptor:(id)arg1 loadingIfNeeded:(_Bool)arg2;	// IMP=0x00000000002a22b7
- (id)_entryDescriptorAtIndexPath:(id)arg1;	// IMP=0x00000000002a21d5
- (void)_configureEntry:(id)arg1 withEntryDescriptor:(id)arg2;	// IMP=0x00000000002a2127
- (id)_combinedEntryDescriptor;	// IMP=0x00000000002a20b8
- (id)_cachedEntryForEntryDescriptor:(id)arg1;	// IMP=0x00000000002a1f4c
- (void)_cancelLoadForEntryDescriptors:(id)arg1;	// IMP=0x00000000002a1c4e
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;	// IMP=0x00000000002a1b58
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;	// IMP=0x00000000002a1b17
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;	// IMP=0x00000000002a1ad6
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;	// IMP=0x00000000002a1a69
- (long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;	// IMP=0x00000000002a1a13
- (long long)numberOfSectionsInIndexBarControl:(id)arg1;	// IMP=0x00000000002a19a1
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;	// IMP=0x00000000002a193a
- (id)combinedEntryForIndexBarControl:(id)arg1;	// IMP=0x00000000002a18af
- (void)reloadData;	// IMP=0x00000000002a1812
- (void)reloadSections:(id)arg1;	// IMP=0x00000000002a1316
- (void)reloadEntryDescriptorAtIndexPath:(id)arg1;	// IMP=0x00000000002a11c2
- (void)reloadCombinedEntryDescriptor;	// IMP=0x00000000002a111e
- (void)dealloc;	// IMP=0x00000000002a0ebb
- (id)initWithIndexBarControl:(id)arg1;	// IMP=0x00000000002a0df7
- (id)init;	// IMP=0x00000000002a0d29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

