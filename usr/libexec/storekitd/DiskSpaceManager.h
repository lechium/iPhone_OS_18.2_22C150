//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DiskSpaceManager : NSObject
{
}

+ (long long)recoverableDiskSpaceAtPath:(id)arg1;	// IMP=0x004000000002e68f
+ (_Bool)ensureAvailableDiskSpace:(long long)arg1 atPath:(id)arg2;	// IMP=0x001000000002dfe4
+ (long long)availableDiskSpaceAtPath:(id)arg1;	// IMP=0x001000000002ddb2

@end

