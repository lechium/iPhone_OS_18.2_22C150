//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMMDMv1Liaison : NSObject
{
}

+ (void)refreshState;	// IMP=0x002000000006382d
+ (void)_didEnroll:(_Bool)arg1;	// IMP=0x0010000000063701
+ (void)remoteManagementDidUnenroll;	// IMP=0x00100000000636ed
+ (void)remoteManagementDidEnroll;	// IMP=0x00100000000636d6
+ (_Bool)isEnrollmentInMDMv1Restricted;	// IMP=0x001000000006367d
+ (_Bool)isEnrolledInMDMv1;	// IMP=0x0010000000063613

@end
