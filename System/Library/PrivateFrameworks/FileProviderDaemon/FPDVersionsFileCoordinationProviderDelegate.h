//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDVersionsFileCoordinationProviderDelegate : NSObject
{
    FPDExtensionManager *_extensionManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000024ac7
- (void)_movingItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024a63
- (void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3;	// IMP=0x0000000000024a5d
- (void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2;	// IMP=0x0000000000024a57
- (void)_providedItemAtURL:(id)arg1 didGainPresenterWithInfo:(id)arg2;	// IMP=0x0000000000024a51
- (void)_writerWithID:(id)arg1 didFinishWritingForURL:(id)arg2;	// IMP=0x0000000000024a4b
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;	// IMP=0x0000000000024a45
- (void)_provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022821
- (id)_siblingDelegateForURL:(id)arg1;	// IMP=0x0000000000022819
- (id)_physicalURLForURL:(id)arg1;	// IMP=0x000000000002229b
- (id)_providedItemsOperationQueue;	// IMP=0x0000000000022209
- (id)_fileReactorID;	// IMP=0x00000000000221fc
- (id)initWithExtensionManager:(id)arg1;	// IMP=0x0000000000022191

@end
