//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCContentFilter, SCStream, VCScreenCapturePicker, VCScreenShare;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCScreenCaptureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 8 = 0x8
    NSMutableDictionary *_screenShare;	// 16 = 0x10
    VCScreenShare *_pickerClientScreenShare;	// 24 = 0x18
    VCScreenCapturePicker *_picker;	// 32 = 0x20
    SCContentFilter *_contentFilter;	// 40 = 0x28
    SCStream *_screenStream;	// 48 = 0x30
}

+ (long long)contentTypeForFilter:(id)arg1;	// IMP=0x00100000002d6683
+ (id)sharedManager;	// IMP=0x00100000002d5158
@property(retain, nonatomic) SCStream *screenStream; // @synthesize screenStream=_screenStream;
@property(readonly, nonatomic) SCContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(readonly, nonatomic) VCScreenCapturePicker *picker; // @synthesize picker=_picker;
- (void)pickerCancelled:(id)arg1 forStream:(id)arg2;	// IMP=0x00000000002d66ac
- (void)picker:(id)arg1 pickedContentFilter:(id)arg2 forStream:(id)arg3 error:(id)arg4;	// IMP=0x00000000002d66a6
- (_Bool)shouldUpdateFilter:(id)arg1;	// IMP=0x00000000002d669e
- (id)updateCurrentPickerScreenCapture;	// IMP=0x00000000002d6696
- (id)attributesForContentFilter:(id)arg1;	// IMP=0x00000000002d668e
- (id)errorForAttributesError:(id)arg1;	// IMP=0x00000000002d630e
- (void)endPrivacyAccountingInterval:(id)arg1;	// IMP=0x00000000002d6308
- (void)startPrivacyAccountingInterval:(id)arg1;	// IMP=0x00000000002d6302
- (void)registerBlocksForService;	// IMP=0x00000000002d62fc
- (void)invalidatePicker;	// IMP=0x00000000002d62c9
- (void)createPicker;	// IMP=0x00000000002d624a
- (id)updateScreenCapture:(id)arg1 withConfig:(id)arg2;	// IMP=0x00000000002d6242
- (id)startScreenShare:(id)arg1;	// IMP=0x00000000002d623a
- (id)stopScreenShareAndNotifyDelegate:(id)arg1;	// IMP=0x00000000002d5e58
- (id)stopScreenShare:(id)arg1;	// IMP=0x00000000002d5e50
- (void)removePickerClientScreenShare:(id)arg1;	// IMP=0x00000000002d5e29
- (id)newScreenShareWithConfig:(id)arg1 pid:(id)arg2;	// IMP=0x00000000002d5bf2
- (_Bool)isPickerClientProcessId:(id)arg1;	// IMP=0x00000000002d5abf
- (id)newCaptureSourceID;	// IMP=0x00000000002d5965
- (id)screenShareDictionary:(id)arg1;	// IMP=0x00000000002d5635
- (void)screenCaptureStopFor:(id)arg1 didSucceed:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00000000002d54c2
- (void)screenCaptureStartFor:(id)arg1 didSucceed:(_Bool)arg2 withError:(id)arg3;	// IMP=0x00000000002d534e
- (id)getErrorDictionaryFromError:(id)arg1;	// IMP=0x00000000002d51f4
- (void)dealloc;	// IMP=0x00000000002d5162
- (id)init;	// IMP=0x00000000002d4f7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

