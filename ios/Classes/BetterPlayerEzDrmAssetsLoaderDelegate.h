// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Foundation/Foundation.h>
#import <AVKit/AVKit.h>
#import <AVFoundation/AVFoundation.h>

@interface BetterPlayerEzDrmAssetsLoaderDelegate : NSObject

@property NSString* cert;
@property NSString* drmurl;
@property NSString* token;

- (instancetype)initWithCertificateUrl:(NSString*)cert drmurl:(NSString*)drmurl token:(NSString*)token;

@end
