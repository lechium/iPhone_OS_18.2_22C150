//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, PDUbiquityManagerDelegate;

@interface PDUbiquityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSCountedSet *_filesModified;	// 32 = 0x20
    NSCountedSet *_filesToWrite;	// 40 = 0x28
    NSCountedSet *_filesToDelete;	// 48 = 0x30
    _Atomic _Bool _canStart;	// 56 = 0x38
    _Atomic int _ubiquityState;	// 60 = 0x3c
    _Atomic unsigned int _ubiquityStartToken;	// 64 = 0x40
    _Bool _addedToFilePresenter;	// 68 = 0x44
    id <PDUbiquityManagerDelegate> _delegate;	// 72 = 0x48
    NSURL *_ubiquitousURL;	// 80 = 0x50
}

+ (void)removeLastEventIdentifier;	// IMP=0x0020000000234357
- (void).cxx_destruct;	// IMP=0x002000000023b32d
@property(retain) NSURL *ubiquitousURL; // @synthesize ubiquitousURL=_ubiquitousURL;
@property(nonatomic) __weak id <PDUbiquityManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)lastPresentedItemEventIdentifier;	// IMP=0x001000000023b2d9
- (void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1;	// IMP=0x001000000023b283
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000023b14e
- (void)presentedSubitemDidAppearAtURL:(id)arg1;	// IMP=0x001000000023af64
- (void)presentedSubitemDidChangeAtURL:(id)arg1;	// IMP=0x001000000023a8c7
- (void)presentedItemDidMoveToURL:(id)arg1;	// IMP=0x001000000023a7f9
- (void)presentedItemDidGainVersion:(id)arg1;	// IMP=0x001000000023a6d7
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_queue_resolveURLIfNecessary:(id)arg1 fileCoordinator:(id)arg2;	// IMP=0x001000000023a00b
- (void)_queue_resolveURLIfNecessary:(id)arg1;	// IMP=0x0010000000239f99
- (void)_queue_addedToFilePresenter;	// IMP=0x0010000000239b27
- (void)_queue_removeFromFilePresenter;	// IMP=0x0010000000239af6
- (void)_queue_addToFilePresenter;	// IMP=0x0010000000239a55
- (void)_queue_copyCatalogToUbiquity:(id)arg1;	// IMP=0x0010000000239845
- (void)_queue_copyCatalogToLocalStore:(id)arg1;	// IMP=0x00100000002396cf
- (void)_queue_handleCatalogUpdate;	// IMP=0x0010000000239544
- (void)_queue_handlePassUpdate:(id)arg1;	// IMP=0x0010000000238ccd
- (void)_queue_compareCatalogsAndTakeNewerVersion;	// IMP=0x00100000002388b2
- (void)_queue_comparePassesAndTakeNewerVersion:(id)arg1;	// IMP=0x001000000023810c
- (void)_queue_copyPassesFromLocalStoreToUbiquity:(id)arg1;	// IMP=0x0010000000237d12
- (void)_queue_copyPassesFromUbiquityToLocalStore:(id)arg1;	// IMP=0x00100000002377b1
- (id)_queue_passUniqueIDs;	// IMP=0x00100000002371a8
- (void)_queue_mergeUbiquityWithLocalStore;	// IMP=0x0010000000236ef7
- (void)_queue_startWithTokenFinishedWithFinalState:(int)arg1;	// IMP=0x0010000000236d7d
- (_Bool)_queue_startNotYetUbiquitousWithDestinationURL:(id)arg1;	// IMP=0x00100000002368e4
- (void)_queue_startAlreadyUbiquitous;	// IMP=0x0010000000236377
- (void)_attemptCoordinatedReadWithoutChangesAtURL:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;	// IMP=0x00100000002360c2
- (id)_urlForCatalogRelativeToDirectoryURL:(id)arg1;	// IMP=0x00100000002360a4
- (id)_urlForCardWithUniqueID:(id)arg1 relativeToDirectoryURL:(id)arg2;	// IMP=0x001000000023603e
- (void)_handleUbiquityIdentityChanged:(id)arg1;	// IMP=0x0010000000235fc3
- (void)updateUbiquitousCatalog:(id)arg1;	// IMP=0x0010000000235cc1
- (void)removeUbiquitousPassWithUniqueID:(id)arg1 completed:(_Bool)arg2;	// IMP=0x0010000000235797
- (void)prepareToRemoveUbiquitousPassWithUniqueID:(id)arg1;	// IMP=0x00100000002356eb
- (_Bool)passWillBeDeleted:(id)arg1;	// IMP=0x00100000002355dd
- (void)updateUbiquitousPass:(id)arg1;	// IMP=0x0010000000234b4f
- (void)restart;	// IMP=0x0010000000234ab9
- (void)_startWithToken:(unsigned int)arg1;	// IMP=0x00100000002343ea
- (void)start;	// IMP=0x00100000002343c7
- (void)dealloc;	// IMP=0x00100000002342b3
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000234101

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R

@property(readonly, copy) NSURL *primaryPresentedItemURL;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSURL",?,R,C

@property(readonly) Class superclass;

@end

