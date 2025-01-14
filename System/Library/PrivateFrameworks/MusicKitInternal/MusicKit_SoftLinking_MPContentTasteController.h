//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPContentTasteController;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPContentTasteController : NSObject
{
    MPContentTasteController *_underlyingContentTasteController;	// 8 = 0x8
}

+ (id)contentTasteControllerDidChangeNotificationName;	// IMP=0x0040000000014e68
+ (id)sharedContentTasteController;	// IMP=0x00400000000149db
- (void).cxx_destruct;	// IMP=0x0000000000014f16
- (void)_handleContentTasteControllerDidChangeNotification:(id)arg1;	// IMP=0x0000000000014e75
- (long long)_underlyingTasteTypeFromContentTasteType:(long long)arg1;	// IMP=0x0000000000014e51
- (long long)_contentTasteTypeFromUnderlyingTasteType:(long long)arg1;	// IMP=0x0000000000014e3a
- (void)setTasteType:(long long)arg1 forModelObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014d92
- (long long)tasteTypeForModelObject:(id)arg1;	// IMP=0x0000000000014d2b
- (void)dealloc;	// IMP=0x0000000000014c91
- (id)_initWithUnderlyingContentTasteController:(id)arg1;	// IMP=0x0000000000014b14

@end

