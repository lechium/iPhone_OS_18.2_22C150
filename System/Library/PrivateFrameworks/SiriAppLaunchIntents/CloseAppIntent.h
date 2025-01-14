//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class Application, NSArray;

@interface CloseAppIntent : INIntent
{
}

+ (_Bool)shouldSkipDefaultSchemaCheck;	// IMP=0x006000000000f21b
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x00000000000b712f
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x00000000000b6f46
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b6e42
- (id)init;	// IMP=0x00000000000b6de6

// Remaining properties
@property(nonatomic) long long appNoun; // @dynamic appNoun;
@property(nonatomic) long long appReference; // @dynamic appReference;
@property(nonatomic, retain) Application *application; // @dynamic application;
@property(nonatomic, retain) Application *requestedApplication; // @dynamic requestedApplication;
@property(nonatomic, copy) NSArray *suggestedApplications; // @dynamic suggestedApplications;

@end

