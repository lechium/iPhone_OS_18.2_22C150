//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MADProgressReporterBackgroundSystemTask
{
}

+ (double)expectedDuration;	// IMP=0x004000000017af16
+ (_Bool)resourceIntensive;	// IMP=0x001000000017af0e
+ (_Bool)externalPowerRequired;	// IMP=0x001000000017af06
+ (unsigned long long)taskID;	// IMP=0x001000000017aefb
+ (id)identifier;	// IMP=0x001000000017aeee
+ (id)sharedTask;	// IMP=0x001000000017ae61
- (void)executeWithSystemTask:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x004000000017af24

@end
