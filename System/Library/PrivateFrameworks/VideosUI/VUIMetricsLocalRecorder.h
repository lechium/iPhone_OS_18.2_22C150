//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VUIMetricsLocalRecorder : NSObject
{
    MISSING_TYPE *storageManager;	// 8 = 0x8
    MISSING_TYPE *currentSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000589d38
- (id)init;	// IMP=0x0000000000589d05
- (void)recordPagePerfRenderEventWithVuiDictionary:(id)arg1;	// IMP=0x0000000000589be9
- (id)initWithStorageManager:(id)arg1;	// IMP=0x0000000000589a64

@end
