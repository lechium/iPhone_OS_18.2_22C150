//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class CLKComplicationDescriptor, CLKComplicationTemplate, NSArray, NSNumber, NSString, NSUUID;

@protocol NTKComplicationStoreServer <NSObject>
- (void)removeComplicationSampleTemplatesForClientIdentifier:(NSString *)arg1 descriptor:(CLKComplicationDescriptor *)arg2;
- (void)updateComplicationDescriptors:(NSArray *)arg1 forClientIdentifier:(NSString *)arg2;
- (void)updateLocalizableSampleDataTemplate:(CLKComplicationTemplate *)arg1 forClientIdentifier:(NSString *)arg2 descriptor:(CLKComplicationDescriptor *)arg3 family:(long long)arg4;
- (void)registerForCollectionIdentifier:(NSString *)arg1 deviceUUID:(NSUUID *)arg2 withSeqId:(NSNumber *)arg3;
@end
