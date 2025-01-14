//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface STSetRequest
{
    NSString *_syncToken;	// 16 = 0x10
    NSArray *_declarations;	// 24 = 0x18
}

+ (id)requestWithUUID:(id)arg1 withSyncToken:(id)arg2 withDeclarations:(id)arg3;	// IMP=0x00400000000aed16
+ (id)registeredIdentifier;	// IMP=0x00100000000aed09
+ (id)registeredClassName;	// IMP=0x00100000000aecfc
- (void).cxx_destruct;	// IMP=0x00200000000af142
@property(copy, nonatomic) NSArray *declarations; // @synthesize declarations=_declarations;
@property(copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000af069
- (id)serialize;	// IMP=0x00100000000aef44
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000aeddb

@end

