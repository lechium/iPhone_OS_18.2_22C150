//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSUtils.h>

@interface CSUtils (AttSiri)
+ (id)getInputoriginFromRecordType:(id)arg1 withAsset:(id)arg2;	// IMP=0x00200000000160ca
+ (id)timeStampString;	// IMP=0x0010000000016002
+ (void)logMitigationFeatures:(id)arg1 forTask:(id)arg2 withModelOutput:(id)arg3 forMHRequestId:(id)arg4 forRequestId:(id)arg5;	// IMP=0x00100000000153f9
+ (void)getTrialIdsForAssetType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ef65
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;	// IMP=0x001000000005ef5d
+ (_Bool)extractArchiveFromDirectory:(id)arg1 toDir:(id)arg2;	// IMP=0x001000000007a1e8
+ (id)distributionDictionary:(id)arg1;	// IMP=0x00100000000f0666
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f4533
@end

