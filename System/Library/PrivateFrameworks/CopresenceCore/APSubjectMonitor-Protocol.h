//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/NSObject-Protocol.h>

@class NSArray;
@protocol APSubjectMonitorSubscription;

@protocol APSubjectMonitor <NSObject>
- (void)appProtectionSubjectsChanged:(NSArray *)arg1 forSubscription:(id <APSubjectMonitorSubscription>)arg2;
@end

