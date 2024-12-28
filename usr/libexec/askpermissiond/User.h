//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface User : NSObject
{
    NSString *_biometricsToken;	// 8 = 0x8
    NSString *_DSID;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_username;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000030d72
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSString *biometricsToken; // @synthesize biometricsToken=_biometricsToken;
- (id)description;	// IMP=0x0010000000030ceb
- (id)compile;	// IMP=0x0010000000030bd6
- (id)initWithDSID:(id)arg1 username:(id)arg2 password:(id)arg3 biometricsToken:(id)arg4;	// IMP=0x0010000000030aee
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000000308e2

@end
