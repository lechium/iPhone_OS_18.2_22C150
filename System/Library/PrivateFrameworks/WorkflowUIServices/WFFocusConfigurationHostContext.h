//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@protocol WFFocusConfigurationHostContextDelegate;

__attribute__((visibility("hidden")))
@interface WFFocusConfigurationHostContext : NSExtensionContext
{
    id <WFFocusConfigurationHostContextDelegate> _focusConfigurationDelegate;	// 8 = 0x8
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x0010000000072c12
+ (id)_allowedErrorClasses;	// IMP=0x0010000000072bdc
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000072bbc
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0010000000072bb2
- (void).cxx_destruct;	// IMP=0x0000000000072d76
@property(nonatomic) __weak id <WFFocusConfigurationHostContextDelegate> focusConfigurationDelegate; // @synthesize focusConfigurationDelegate=_focusConfigurationDelegate;
- (void)didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect)arg2;	// IMP=0x0000000000072cc5
- (void)configurationUIStateDidUpdate:(id)arg1;	// IMP=0x0000000000072c5a

@end
