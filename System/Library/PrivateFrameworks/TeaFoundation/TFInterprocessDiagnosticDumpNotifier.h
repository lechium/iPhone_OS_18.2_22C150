//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TFInterprocessDiagnosticDumpNotifier : NSObject
{
    MISSING_TYPE *interprocessDiagnosticDumpNotification;	// 8 = 0x8
    MISSING_TYPE *diagnosticTempDir;	// 0 = 0x0
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000007474b
- (id)init;	// IMP=0x0000000000074715
- (void)triggerDiagnosticFileDump;	// IMP=0x00000000000746b2
- (id)initWithNotificationName:(id)arg1 diagnosticTempDir:(id)arg2 log:(id)arg3;	// IMP=0x000000000007408c

@end
