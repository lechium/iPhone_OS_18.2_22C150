//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AUMessageChannel_XPC;

__attribute__((visibility("hidden")))
@interface ExportedMessageChannel : NSObject
{
    AUMessageChannel_XPC *_messageChannel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011c18c
- (void)onCallRemoteAU:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000011c042
- (id)initWithMessageChannel:(id)arg1;	// IMP=0x000000000011bfca

@end
