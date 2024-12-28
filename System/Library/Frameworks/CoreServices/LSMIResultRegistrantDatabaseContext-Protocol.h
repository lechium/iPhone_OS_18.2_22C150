//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSObject-Protocol.h>

@class FSNode, LSApplicationRecord, NSDictionary, NSSet, NSString;

@protocol LSMIResultRegistrantDatabaseContext <NSObject>
- (void (^)(id))unregisterApplicationWithBundleIdentifier:(NSString *)arg1 type:(unsigned int)arg2 error:(id *)arg3;
- (LSApplicationRecord *)findContainerizedRecordForBundleUnit:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(FSNode *)arg1 installDictionary:(NSDictionary *)arg2 personasWithAttributes:(NSSet *)arg3 error:(id *)arg4;
- (_Bool)fullBundleExistsForIdentifier:(NSString *)arg1 matchingNode:(FSNode *)arg2;
@end
