//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol _EXLoadOperatorXPCProtocol <NSObject>
- (void)previewImageWithClassName:(NSString *)arg1 options:(NSDictionary *)arg2 reply:(void (^)(id <NSSecureCoding><NSObject>, NSError *))arg3;
- (void)resolveWithIdentifier:(NSString *)arg1 className:(NSString *)arg2 options:(NSDictionary *)arg3 reply:(void (^)(id <NSSecureCoding><NSObject>, NSError *))arg4;
@end
