//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSSet, NSString;
@protocol CRKSharingAirDropTransfer;

@protocol CRKSharingPrimitives
- (id <CRKSharingAirDropTransfer>)startAirDropTransferWithAutoAccept:(_Bool)arg1 hideProgress:(_Bool)arg2 senderName:(NSString *)arg3 previewImageData:(NSData *)arg4 bundleID:(NSString *)arg5 sourceBundleID:(NSString *)arg6 itemsDescription:(NSString *)arg7 fileURLs:(NSSet *)arg8 resultHandler:(void (^)(NSString *, _Bool, NSError *))arg9;
@end

