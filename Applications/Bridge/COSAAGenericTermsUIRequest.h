//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAGenericTermsUIRequest.h>

@class NRDevice, NSURLRequest;

@interface COSAAGenericTermsUIRequest : AAGenericTermsUIRequest
{
    _Bool _showWarranty;	// 8 = 0x8
    NRDevice *_device;	// 16 = 0x10
}

+ (id)deviceModelHeaderName;	// IMP=0x0040000000104c70
+ (id)pairedClientInfoHeaderName;	// IMP=0x0010000000104c63
+ (id)clientInfoHeaderForDevice:(id)arg1;	// IMP=0x001000000010494d
- (void).cxx_destruct;	// IMP=0x0020000000105079
@property(nonatomic) _Bool showWarranty; // @synthesize showWarranty=_showWarranty;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(readonly) NSURLRequest *urlRequest;
- (id)initWithGizmoDevice:(id)arg1 showWarranty:(_Bool)arg2;	// IMP=0x0010000000104c7d

@end
