//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, SFAppleIDAccount, _TtC16DaemoniOSLibrary20SDAppleIDAccountInfo;

@protocol _TtP16DaemoniOSLibrary33SDAppleIDPlatformAccountInfoStore_
- (_Bool)storeWithAccount:(SFAppleIDAccount *)arg1 personInfo:(NSDictionary *)arg2;
- (void)deletePersonInfoCacheWithAccount:(SFAppleIDAccount *)arg1;
- (_TtC16DaemoniOSLibrary20SDAppleIDAccountInfo *)read;
@property(nonatomic, readonly) _Bool storeExists;
@end
