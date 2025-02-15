//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class Application, NSArray, NSString;

@interface DeepLaunchIntent : INIntent
{
}

+ (_Bool)shouldSkipDefaultSchemaCheck;	// IMP=0x000000000000f22b
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x00000000000b7d82
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x00000000000b7b99
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b7a95
- (id)init;	// IMP=0x00000000000b7a39

// Remaining properties
@property(nonatomic, copy) NSArray *pageCanonicalNames; // @dynamic pageCanonicalNames;
@property(nonatomic, copy) NSString *pageName; // @dynamic pageName;
@property(nonatomic, retain) Application *requestedApplication; // @dynamic requestedApplication;

@end

