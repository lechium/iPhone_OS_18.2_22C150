//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BLSHTailspinLogWriter : NSObject
{
    NSString *_reason;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

+ (_Bool)isTailspinAvailable;	// IMP=0x0060000000061718
- (void).cxx_destruct;	// IMP=0x00000000000618dd
- (void)_finish:(_Bool)arg1;	// IMP=0x000000000006185b
- (void)writeTailspinLogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061720
- (id)initWithReason:(id)arg1;	// IMP=0x0000000000061633

@end

