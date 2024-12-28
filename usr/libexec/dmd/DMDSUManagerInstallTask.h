//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMDSUManagerInstallTask : NSObject
{
}

+ (id)productKeyOrDefaultFromStatus:(id)arg1;	// IMP=0x0020000000087179
+ (id)productKeyFromStatus:(id)arg1;	// IMP=0x00100000000870ea
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x001000000008701d
+ (id)defaultProductKey;	// IMP=0x0010000000087010
+ (id)sharedInstallTask;	// IMP=0x0010000000086fbb
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x00400000000871fb
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x00100000000871f3
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x00100000000871eb
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000871e3
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x00100000000871db

@end
