//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle;
@protocol SDAirDropAlertManagerProtocol;

@interface SDAirDropFakeTransfer : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    _Bool _debugModeEnabled;	// 16 = 0x10
    NSObject<SDAirDropAlertManagerProtocol> *_transferManager;	// 24 = 0x18
}

+ (id)sharedFakeTransfer;	// IMP=0x00400000000c98e1
- (void).cxx_destruct;	// IMP=0x00200000000cbea8
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(retain, nonatomic) NSObject<SDAirDropAlertManagerProtocol> *transferManager; // @synthesize transferManager=_transferManager;
- (void)replaceItemsWithItems:(id)arg1 inFakeTransferData:(id)arg2;	// IMP=0x00100000000cbe62
- (void)addProgressPropertiesWithBytesCopied:(long long)arg1 totalBytes:(long long)arg2 timeRemaining:(long long)arg3 filesCopied:(long long)arg4 toFakeTransferData:(id)arg5;	// IMP=0x00100000000cbcf4
- (void)addIconPropertiesWithImage:(struct CGImage *)arg1 toFakeTransferData:(id)arg2;	// IMP=0x00100000000cbcd2
- (id)generateFakeTransferDataFromBundleID:(id)arg1 files:(id)arg2 items:(id)arg3 itemsDescription:(id)arg4;	// IMP=0x00000000000cb955
- (CDUnknownBlockType)createBlockToPerformBlockOnMainQueue:(CDUnknownBlockType)arg1 withDelay:(float)arg2;	// IMP=0x00100000000cb776
- (id)writeDataToFile:(id)arg1 ofType:(id)arg2;	// IMP=0x00100000000cb5de
- (void)startFakeTransferWithItems:(id)arg1 fromBundleID:(id)arg2 withItemsDescription:(id)arg3 previewImage:(id)arg4 desiredDuration:(float)arg5 totalBytes:(long long)arg6;	// IMP=0x00100000000ca4e8
- (void)startFakeTransferWithItemSources:(id)arg1;	// IMP=0x00100000000ca361
- (void)startFakeTransferInCategory:(long long)arg1 ofType:(long long)arg2;	// IMP=0x00100000000c9cc0
- (id)init;	// IMP=0x00100000000c9966

@end

