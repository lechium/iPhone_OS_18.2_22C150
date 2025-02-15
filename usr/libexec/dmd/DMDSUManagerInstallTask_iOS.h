//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SUManagerClient;

@interface DMDSUManagerInstallTask_iOS
{
    SUManagerClient *softwareUpdateServices;	// 8 = 0x8
}

+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x0040000000087c28
+ (id)_dmfInstallErrorFromSUInstallError:(id)arg1;	// IMP=0x00100000000878e8
+ (id)_dmfDownloadErrorFromSUDownloadError:(id)arg1;	// IMP=0x00100000000874cf
+ (id)defaultProductKey;	// IMP=0x00100000000874c2
- (void).cxx_destruct;	// IMP=0x002000000008933c
@property(retain, nonatomic) SUManagerClient *softwareUpdateServices; // @synthesize softwareUpdateServices;
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x0010000000088eef
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x0010000000088bd1
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x0010000000088843
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000881b1
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x0010000000087d79
- (id)init;	// IMP=0x0010000000087cf5

@end

