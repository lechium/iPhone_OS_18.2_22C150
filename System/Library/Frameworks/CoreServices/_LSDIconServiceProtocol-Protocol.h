//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol _LSDIconServiceProtocol
- (void)getAlternateIconNameForIdentifier:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)setAlternateIconName:(NSString *)arg1 forIdentifier:(NSString *)arg2 iconsDictionary:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
@end
