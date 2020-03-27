// Copyright (c) 2015-2019 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
//     

// This header is generated from the Khronos Vulkan XML API Registry.

#pragma once

#include "../handles.hpp"
#include "VkAcquire.hpp"
#include "VkAcceleration.hpp"
#include "VkApplication.hpp"
#include "VkAllocation.hpp"
#include "VkAndroid.hpp"
#include "VkAttachment.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct AttachmentDescription
  {
    VULKAN_HPP_CONSTEXPR AttachmentDescription( VULKAN_HPP_NAMESPACE::AttachmentDescriptionFlags flags_ = {},
                                                VULKAN_HPP_NAMESPACE::Format format_ = VULKAN_HPP_NAMESPACE::Format::eUndefined,
                                                VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples_ = VULKAN_HPP_NAMESPACE::SampleCountFlagBits::e1,
                                                VULKAN_HPP_NAMESPACE::AttachmentLoadOp loadOp_ = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad,
                                                VULKAN_HPP_NAMESPACE::AttachmentStoreOp storeOp_ = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore,
                                                VULKAN_HPP_NAMESPACE::AttachmentLoadOp stencilLoadOp_ = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad,
                                                VULKAN_HPP_NAMESPACE::AttachmentStoreOp stencilStoreOp_ = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore,
                                                VULKAN_HPP_NAMESPACE::ImageLayout initialLayout_ = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined,
                                                VULKAN_HPP_NAMESPACE::ImageLayout finalLayout_ = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , format( format_ )
      , samples( samples_ )
      , loadOp( loadOp_ )
      , storeOp( storeOp_ )
      , stencilLoadOp( stencilLoadOp_ )
      , stencilStoreOp( stencilStoreOp_ )
      , initialLayout( initialLayout_ )
      , finalLayout( finalLayout_ )
    {}

    VULKAN_HPP_CONSTEXPR AttachmentDescription( AttachmentDescription const& rhs ) VULKAN_HPP_NOEXCEPT
      : flags( rhs.flags )
      , format( rhs.format )
      , samples( rhs.samples )
      , loadOp( rhs.loadOp )
      , storeOp( rhs.storeOp )
      , stencilLoadOp( rhs.stencilLoadOp )
      , stencilStoreOp( rhs.stencilStoreOp )
      , initialLayout( rhs.initialLayout )
      , finalLayout( rhs.finalLayout )
    {}

    AttachmentDescription & operator=( AttachmentDescription const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( AttachmentDescription ) );
      return *this;
    }

    AttachmentDescription( VkAttachmentDescription const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    AttachmentDescription& operator=( VkAttachmentDescription const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::AttachmentDescription const *>(&rhs);
      return *this;
    }

    AttachmentDescription & setFlags( VULKAN_HPP_NAMESPACE::AttachmentDescriptionFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    AttachmentDescription & setFormat( VULKAN_HPP_NAMESPACE::Format format_ ) VULKAN_HPP_NOEXCEPT
    {
      format = format_;
      return *this;
    }

    AttachmentDescription & setSamples( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples_ ) VULKAN_HPP_NOEXCEPT
    {
      samples = samples_;
      return *this;
    }

    AttachmentDescription & setLoadOp( VULKAN_HPP_NAMESPACE::AttachmentLoadOp loadOp_ ) VULKAN_HPP_NOEXCEPT
    {
      loadOp = loadOp_;
      return *this;
    }

    AttachmentDescription & setStoreOp( VULKAN_HPP_NAMESPACE::AttachmentStoreOp storeOp_ ) VULKAN_HPP_NOEXCEPT
    {
      storeOp = storeOp_;
      return *this;
    }

    AttachmentDescription & setStencilLoadOp( VULKAN_HPP_NAMESPACE::AttachmentLoadOp stencilLoadOp_ ) VULKAN_HPP_NOEXCEPT
    {
      stencilLoadOp = stencilLoadOp_;
      return *this;
    }

    AttachmentDescription & setStencilStoreOp( VULKAN_HPP_NAMESPACE::AttachmentStoreOp stencilStoreOp_ ) VULKAN_HPP_NOEXCEPT
    {
      stencilStoreOp = stencilStoreOp_;
      return *this;
    }

    AttachmentDescription & setInitialLayout( VULKAN_HPP_NAMESPACE::ImageLayout initialLayout_ ) VULKAN_HPP_NOEXCEPT
    {
      initialLayout = initialLayout_;
      return *this;
    }

    AttachmentDescription & setFinalLayout( VULKAN_HPP_NAMESPACE::ImageLayout finalLayout_ ) VULKAN_HPP_NOEXCEPT
    {
      finalLayout = finalLayout_;
      return *this;
    }

    operator VkAttachmentDescription const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkAttachmentDescription*>( this );
    }

    operator VkAttachmentDescription &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkAttachmentDescription*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( AttachmentDescription const& ) const = default;
#else
    bool operator==( AttachmentDescription const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( flags == rhs.flags )
          && ( format == rhs.format )
          && ( samples == rhs.samples )
          && ( loadOp == rhs.loadOp )
          && ( storeOp == rhs.storeOp )
          && ( stencilLoadOp == rhs.stencilLoadOp )
          && ( stencilStoreOp == rhs.stencilStoreOp )
          && ( initialLayout == rhs.initialLayout )
          && ( finalLayout == rhs.finalLayout );
    }

    bool operator!=( AttachmentDescription const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    VULKAN_HPP_NAMESPACE::AttachmentDescriptionFlags flags = {};
    VULKAN_HPP_NAMESPACE::Format format = VULKAN_HPP_NAMESPACE::Format::eUndefined;
    VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples = VULKAN_HPP_NAMESPACE::SampleCountFlagBits::e1;
    VULKAN_HPP_NAMESPACE::AttachmentLoadOp loadOp = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad;
    VULKAN_HPP_NAMESPACE::AttachmentStoreOp storeOp = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore;
    VULKAN_HPP_NAMESPACE::AttachmentLoadOp stencilLoadOp = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad;
    VULKAN_HPP_NAMESPACE::AttachmentStoreOp stencilStoreOp = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore;
    VULKAN_HPP_NAMESPACE::ImageLayout initialLayout = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined;
    VULKAN_HPP_NAMESPACE::ImageLayout finalLayout = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined;
  };
  static_assert( sizeof( AttachmentDescription ) == sizeof( VkAttachmentDescription ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<AttachmentDescription>::value, "struct wrapper is not a standard layout!" );

  struct AttachmentDescription2KHR
  {
    VULKAN_HPP_CONSTEXPR AttachmentDescription2KHR( VULKAN_HPP_NAMESPACE::AttachmentDescriptionFlags flags_ = {},
                                                    VULKAN_HPP_NAMESPACE::Format format_ = VULKAN_HPP_NAMESPACE::Format::eUndefined,
                                                    VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples_ = VULKAN_HPP_NAMESPACE::SampleCountFlagBits::e1,
                                                    VULKAN_HPP_NAMESPACE::AttachmentLoadOp loadOp_ = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad,
                                                    VULKAN_HPP_NAMESPACE::AttachmentStoreOp storeOp_ = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore,
                                                    VULKAN_HPP_NAMESPACE::AttachmentLoadOp stencilLoadOp_ = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad,
                                                    VULKAN_HPP_NAMESPACE::AttachmentStoreOp stencilStoreOp_ = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore,
                                                    VULKAN_HPP_NAMESPACE::ImageLayout initialLayout_ = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined,
                                                    VULKAN_HPP_NAMESPACE::ImageLayout finalLayout_ = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined ) VULKAN_HPP_NOEXCEPT
      : flags( flags_ )
      , format( format_ )
      , samples( samples_ )
      , loadOp( loadOp_ )
      , storeOp( storeOp_ )
      , stencilLoadOp( stencilLoadOp_ )
      , stencilStoreOp( stencilStoreOp_ )
      , initialLayout( initialLayout_ )
      , finalLayout( finalLayout_ )
    {}

    VULKAN_HPP_CONSTEXPR AttachmentDescription2KHR( AttachmentDescription2KHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , flags( rhs.flags )
      , format( rhs.format )
      , samples( rhs.samples )
      , loadOp( rhs.loadOp )
      , storeOp( rhs.storeOp )
      , stencilLoadOp( rhs.stencilLoadOp )
      , stencilStoreOp( rhs.stencilStoreOp )
      , initialLayout( rhs.initialLayout )
      , finalLayout( rhs.finalLayout )
    {}

    AttachmentDescription2KHR & operator=( AttachmentDescription2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( AttachmentDescription2KHR ) - offsetof( AttachmentDescription2KHR, pNext ) );
      return *this;
    }

    AttachmentDescription2KHR( VkAttachmentDescription2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    AttachmentDescription2KHR& operator=( VkAttachmentDescription2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::AttachmentDescription2KHR const *>(&rhs);
      return *this;
    }

    AttachmentDescription2KHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    AttachmentDescription2KHR & setFlags( VULKAN_HPP_NAMESPACE::AttachmentDescriptionFlags flags_ ) VULKAN_HPP_NOEXCEPT
    {
      flags = flags_;
      return *this;
    }

    AttachmentDescription2KHR & setFormat( VULKAN_HPP_NAMESPACE::Format format_ ) VULKAN_HPP_NOEXCEPT
    {
      format = format_;
      return *this;
    }

    AttachmentDescription2KHR & setSamples( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples_ ) VULKAN_HPP_NOEXCEPT
    {
      samples = samples_;
      return *this;
    }

    AttachmentDescription2KHR & setLoadOp( VULKAN_HPP_NAMESPACE::AttachmentLoadOp loadOp_ ) VULKAN_HPP_NOEXCEPT
    {
      loadOp = loadOp_;
      return *this;
    }

    AttachmentDescription2KHR & setStoreOp( VULKAN_HPP_NAMESPACE::AttachmentStoreOp storeOp_ ) VULKAN_HPP_NOEXCEPT
    {
      storeOp = storeOp_;
      return *this;
    }

    AttachmentDescription2KHR & setStencilLoadOp( VULKAN_HPP_NAMESPACE::AttachmentLoadOp stencilLoadOp_ ) VULKAN_HPP_NOEXCEPT
    {
      stencilLoadOp = stencilLoadOp_;
      return *this;
    }

    AttachmentDescription2KHR & setStencilStoreOp( VULKAN_HPP_NAMESPACE::AttachmentStoreOp stencilStoreOp_ ) VULKAN_HPP_NOEXCEPT
    {
      stencilStoreOp = stencilStoreOp_;
      return *this;
    }

    AttachmentDescription2KHR & setInitialLayout( VULKAN_HPP_NAMESPACE::ImageLayout initialLayout_ ) VULKAN_HPP_NOEXCEPT
    {
      initialLayout = initialLayout_;
      return *this;
    }

    AttachmentDescription2KHR & setFinalLayout( VULKAN_HPP_NAMESPACE::ImageLayout finalLayout_ ) VULKAN_HPP_NOEXCEPT
    {
      finalLayout = finalLayout_;
      return *this;
    }

    operator VkAttachmentDescription2KHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkAttachmentDescription2KHR*>( this );
    }

    operator VkAttachmentDescription2KHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkAttachmentDescription2KHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( AttachmentDescription2KHR const& ) const = default;
#else
    bool operator==( AttachmentDescription2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( flags == rhs.flags )
          && ( format == rhs.format )
          && ( samples == rhs.samples )
          && ( loadOp == rhs.loadOp )
          && ( storeOp == rhs.storeOp )
          && ( stencilLoadOp == rhs.stencilLoadOp )
          && ( stencilStoreOp == rhs.stencilStoreOp )
          && ( initialLayout == rhs.initialLayout )
          && ( finalLayout == rhs.finalLayout );
    }

    bool operator!=( AttachmentDescription2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eAttachmentDescription2KHR;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::AttachmentDescriptionFlags flags = {};
    VULKAN_HPP_NAMESPACE::Format format = VULKAN_HPP_NAMESPACE::Format::eUndefined;
    VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples = VULKAN_HPP_NAMESPACE::SampleCountFlagBits::e1;
    VULKAN_HPP_NAMESPACE::AttachmentLoadOp loadOp = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad;
    VULKAN_HPP_NAMESPACE::AttachmentStoreOp storeOp = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore;
    VULKAN_HPP_NAMESPACE::AttachmentLoadOp stencilLoadOp = VULKAN_HPP_NAMESPACE::AttachmentLoadOp::eLoad;
    VULKAN_HPP_NAMESPACE::AttachmentStoreOp stencilStoreOp = VULKAN_HPP_NAMESPACE::AttachmentStoreOp::eStore;
    VULKAN_HPP_NAMESPACE::ImageLayout initialLayout = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined;
    VULKAN_HPP_NAMESPACE::ImageLayout finalLayout = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined;
  };
  static_assert( sizeof( AttachmentDescription2KHR ) == sizeof( VkAttachmentDescription2KHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<AttachmentDescription2KHR>::value, "struct wrapper is not a standard layout!" );

  struct AttachmentReference
  {
    VULKAN_HPP_CONSTEXPR AttachmentReference( uint32_t attachment_ = {},
                                              VULKAN_HPP_NAMESPACE::ImageLayout layout_ = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined ) VULKAN_HPP_NOEXCEPT
      : attachment( attachment_ )
      , layout( layout_ )
    {}

    VULKAN_HPP_CONSTEXPR AttachmentReference( AttachmentReference const& rhs ) VULKAN_HPP_NOEXCEPT
      : attachment( rhs.attachment )
      , layout( rhs.layout )
    {}

    AttachmentReference & operator=( AttachmentReference const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( AttachmentReference ) );
      return *this;
    }

    AttachmentReference( VkAttachmentReference const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    AttachmentReference& operator=( VkAttachmentReference const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::AttachmentReference const *>(&rhs);
      return *this;
    }

    AttachmentReference & setAttachment( uint32_t attachment_ ) VULKAN_HPP_NOEXCEPT
    {
      attachment = attachment_;
      return *this;
    }

    AttachmentReference & setLayout( VULKAN_HPP_NAMESPACE::ImageLayout layout_ ) VULKAN_HPP_NOEXCEPT
    {
      layout = layout_;
      return *this;
    }

    operator VkAttachmentReference const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkAttachmentReference*>( this );
    }

    operator VkAttachmentReference &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkAttachmentReference*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( AttachmentReference const& ) const = default;
#else
    bool operator==( AttachmentReference const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( attachment == rhs.attachment )
          && ( layout == rhs.layout );
    }

    bool operator!=( AttachmentReference const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t attachment = {};
    VULKAN_HPP_NAMESPACE::ImageLayout layout = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined;
  };
  static_assert( sizeof( AttachmentReference ) == sizeof( VkAttachmentReference ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<AttachmentReference>::value, "struct wrapper is not a standard layout!" );

  struct AttachmentReference2KHR
  {
    VULKAN_HPP_CONSTEXPR AttachmentReference2KHR( uint32_t attachment_ = {},
                                                  VULKAN_HPP_NAMESPACE::ImageLayout layout_ = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined,
                                                  VULKAN_HPP_NAMESPACE::ImageAspectFlags aspectMask_ = {} ) VULKAN_HPP_NOEXCEPT
      : attachment( attachment_ )
      , layout( layout_ )
      , aspectMask( aspectMask_ )
    {}

    VULKAN_HPP_CONSTEXPR AttachmentReference2KHR( AttachmentReference2KHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , attachment( rhs.attachment )
      , layout( rhs.layout )
      , aspectMask( rhs.aspectMask )
    {}

    AttachmentReference2KHR & operator=( AttachmentReference2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( AttachmentReference2KHR ) - offsetof( AttachmentReference2KHR, pNext ) );
      return *this;
    }

    AttachmentReference2KHR( VkAttachmentReference2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    AttachmentReference2KHR& operator=( VkAttachmentReference2KHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::AttachmentReference2KHR const *>(&rhs);
      return *this;
    }

    AttachmentReference2KHR & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    AttachmentReference2KHR & setAttachment( uint32_t attachment_ ) VULKAN_HPP_NOEXCEPT
    {
      attachment = attachment_;
      return *this;
    }

    AttachmentReference2KHR & setLayout( VULKAN_HPP_NAMESPACE::ImageLayout layout_ ) VULKAN_HPP_NOEXCEPT
    {
      layout = layout_;
      return *this;
    }

    AttachmentReference2KHR & setAspectMask( VULKAN_HPP_NAMESPACE::ImageAspectFlags aspectMask_ ) VULKAN_HPP_NOEXCEPT
    {
      aspectMask = aspectMask_;
      return *this;
    }

    operator VkAttachmentReference2KHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkAttachmentReference2KHR*>( this );
    }

    operator VkAttachmentReference2KHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkAttachmentReference2KHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( AttachmentReference2KHR const& ) const = default;
#else
    bool operator==( AttachmentReference2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( attachment == rhs.attachment )
          && ( layout == rhs.layout )
          && ( aspectMask == rhs.aspectMask );
    }

    bool operator!=( AttachmentReference2KHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eAttachmentReference2KHR;
    const void* pNext = {};
    uint32_t attachment = {};
    VULKAN_HPP_NAMESPACE::ImageLayout layout = VULKAN_HPP_NAMESPACE::ImageLayout::eUndefined;
    VULKAN_HPP_NAMESPACE::ImageAspectFlags aspectMask = {};
  };
  static_assert( sizeof( AttachmentReference2KHR ) == sizeof( VkAttachmentReference2KHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<AttachmentReference2KHR>::value, "struct wrapper is not a standard layout!" );

  struct Extent2D
  {
    VULKAN_HPP_CONSTEXPR Extent2D( uint32_t width_ = {},
                                   uint32_t height_ = {} ) VULKAN_HPP_NOEXCEPT
      : width( width_ )
      , height( height_ )
    {}

    VULKAN_HPP_CONSTEXPR Extent2D( Extent2D const& rhs ) VULKAN_HPP_NOEXCEPT
      : width( rhs.width )
      , height( rhs.height )
    {}

    Extent2D & operator=( Extent2D const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( Extent2D ) );
      return *this;
    }

    Extent2D( VkExtent2D const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    Extent2D& operator=( VkExtent2D const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::Extent2D const *>(&rhs);
      return *this;
    }

    Extent2D & setWidth( uint32_t width_ ) VULKAN_HPP_NOEXCEPT
    {
      width = width_;
      return *this;
    }

    Extent2D & setHeight( uint32_t height_ ) VULKAN_HPP_NOEXCEPT
    {
      height = height_;
      return *this;
    }

    operator VkExtent2D const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkExtent2D*>( this );
    }

    operator VkExtent2D &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkExtent2D*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( Extent2D const& ) const = default;
#else
    bool operator==( Extent2D const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( width == rhs.width )
          && ( height == rhs.height );
    }

    bool operator!=( Extent2D const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t width = {};
    uint32_t height = {};
  };
  static_assert( sizeof( Extent2D ) == sizeof( VkExtent2D ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<Extent2D>::value, "struct wrapper is not a standard layout!" );

  struct SampleLocationEXT
  {
    VULKAN_HPP_CONSTEXPR SampleLocationEXT( float x_ = {},
                                            float y_ = {} ) VULKAN_HPP_NOEXCEPT
      : x( x_ )
      , y( y_ )
    {}

    VULKAN_HPP_CONSTEXPR SampleLocationEXT( SampleLocationEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : x( rhs.x )
      , y( rhs.y )
    {}

    SampleLocationEXT & operator=( SampleLocationEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( SampleLocationEXT ) );
      return *this;
    }

    SampleLocationEXT( VkSampleLocationEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SampleLocationEXT& operator=( VkSampleLocationEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SampleLocationEXT const *>(&rhs);
      return *this;
    }

    SampleLocationEXT & setX( float x_ ) VULKAN_HPP_NOEXCEPT
    {
      x = x_;
      return *this;
    }

    SampleLocationEXT & setY( float y_ ) VULKAN_HPP_NOEXCEPT
    {
      y = y_;
      return *this;
    }

    operator VkSampleLocationEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSampleLocationEXT*>( this );
    }

    operator VkSampleLocationEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSampleLocationEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SampleLocationEXT const& ) const = default;
#else
    bool operator==( SampleLocationEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( x == rhs.x )
          && ( y == rhs.y );
    }

    bool operator!=( SampleLocationEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    float x = {};
    float y = {};
  };
  static_assert( sizeof( SampleLocationEXT ) == sizeof( VkSampleLocationEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SampleLocationEXT>::value, "struct wrapper is not a standard layout!" );

  struct SampleLocationsInfoEXT
  {
    VULKAN_HPP_CONSTEXPR SampleLocationsInfoEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits sampleLocationsPerPixel_ = VULKAN_HPP_NAMESPACE::SampleCountFlagBits::e1,
                                                 VULKAN_HPP_NAMESPACE::Extent2D sampleLocationGridSize_ = {},
                                                 uint32_t sampleLocationsCount_ = {},
                                                 const VULKAN_HPP_NAMESPACE::SampleLocationEXT* pSampleLocations_ = {} ) VULKAN_HPP_NOEXCEPT
      : sampleLocationsPerPixel( sampleLocationsPerPixel_ )
      , sampleLocationGridSize( sampleLocationGridSize_ )
      , sampleLocationsCount( sampleLocationsCount_ )
      , pSampleLocations( pSampleLocations_ )
    {}

    VULKAN_HPP_CONSTEXPR SampleLocationsInfoEXT( SampleLocationsInfoEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : pNext( rhs.pNext )
      , sampleLocationsPerPixel( rhs.sampleLocationsPerPixel )
      , sampleLocationGridSize( rhs.sampleLocationGridSize )
      , sampleLocationsCount( rhs.sampleLocationsCount )
      , pSampleLocations( rhs.pSampleLocations )
    {}

    SampleLocationsInfoEXT & operator=( SampleLocationsInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( &pNext, &rhs.pNext, sizeof( SampleLocationsInfoEXT ) - offsetof( SampleLocationsInfoEXT, pNext ) );
      return *this;
    }

    SampleLocationsInfoEXT( VkSampleLocationsInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    SampleLocationsInfoEXT& operator=( VkSampleLocationsInfoEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT const *>(&rhs);
      return *this;
    }

    SampleLocationsInfoEXT & setPNext( const void* pNext_ ) VULKAN_HPP_NOEXCEPT
    {
      pNext = pNext_;
      return *this;
    }

    SampleLocationsInfoEXT & setSampleLocationsPerPixel( VULKAN_HPP_NAMESPACE::SampleCountFlagBits sampleLocationsPerPixel_ ) VULKAN_HPP_NOEXCEPT
    {
      sampleLocationsPerPixel = sampleLocationsPerPixel_;
      return *this;
    }

    SampleLocationsInfoEXT & setSampleLocationGridSize( VULKAN_HPP_NAMESPACE::Extent2D sampleLocationGridSize_ ) VULKAN_HPP_NOEXCEPT
    {
      sampleLocationGridSize = sampleLocationGridSize_;
      return *this;
    }

    SampleLocationsInfoEXT & setSampleLocationsCount( uint32_t sampleLocationsCount_ ) VULKAN_HPP_NOEXCEPT
    {
      sampleLocationsCount = sampleLocationsCount_;
      return *this;
    }

    SampleLocationsInfoEXT & setPSampleLocations( const VULKAN_HPP_NAMESPACE::SampleLocationEXT* pSampleLocations_ ) VULKAN_HPP_NOEXCEPT
    {
      pSampleLocations = pSampleLocations_;
      return *this;
    }

    operator VkSampleLocationsInfoEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkSampleLocationsInfoEXT*>( this );
    }

    operator VkSampleLocationsInfoEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkSampleLocationsInfoEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( SampleLocationsInfoEXT const& ) const = default;
#else
    bool operator==( SampleLocationsInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( sType == rhs.sType )
          && ( pNext == rhs.pNext )
          && ( sampleLocationsPerPixel == rhs.sampleLocationsPerPixel )
          && ( sampleLocationGridSize == rhs.sampleLocationGridSize )
          && ( sampleLocationsCount == rhs.sampleLocationsCount )
          && ( pSampleLocations == rhs.pSampleLocations );
    }

    bool operator!=( SampleLocationsInfoEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    const VULKAN_HPP_NAMESPACE::StructureType sType = StructureType::eSampleLocationsInfoEXT;
    const void* pNext = {};
    VULKAN_HPP_NAMESPACE::SampleCountFlagBits sampleLocationsPerPixel = VULKAN_HPP_NAMESPACE::SampleCountFlagBits::e1;
    VULKAN_HPP_NAMESPACE::Extent2D sampleLocationGridSize = {};
    uint32_t sampleLocationsCount = {};
    const VULKAN_HPP_NAMESPACE::SampleLocationEXT* pSampleLocations = {};
  };
  static_assert( sizeof( SampleLocationsInfoEXT ) == sizeof( VkSampleLocationsInfoEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<SampleLocationsInfoEXT>::value, "struct wrapper is not a standard layout!" );

  struct AttachmentSampleLocationsEXT
  {
    VULKAN_HPP_CONSTEXPR AttachmentSampleLocationsEXT( uint32_t attachmentIndex_ = {},
                                                       VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT sampleLocationsInfo_ = {} ) VULKAN_HPP_NOEXCEPT
      : attachmentIndex( attachmentIndex_ )
      , sampleLocationsInfo( sampleLocationsInfo_ )
    {}

    VULKAN_HPP_CONSTEXPR AttachmentSampleLocationsEXT( AttachmentSampleLocationsEXT const& rhs ) VULKAN_HPP_NOEXCEPT
      : attachmentIndex( rhs.attachmentIndex )
      , sampleLocationsInfo( rhs.sampleLocationsInfo )
    {}

    AttachmentSampleLocationsEXT & operator=( AttachmentSampleLocationsEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( AttachmentSampleLocationsEXT ) );
      return *this;
    }

    AttachmentSampleLocationsEXT( VkAttachmentSampleLocationsEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    AttachmentSampleLocationsEXT& operator=( VkAttachmentSampleLocationsEXT const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::AttachmentSampleLocationsEXT const *>(&rhs);
      return *this;
    }

    AttachmentSampleLocationsEXT & setAttachmentIndex( uint32_t attachmentIndex_ ) VULKAN_HPP_NOEXCEPT
    {
      attachmentIndex = attachmentIndex_;
      return *this;
    }

    AttachmentSampleLocationsEXT & setSampleLocationsInfo( VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT sampleLocationsInfo_ ) VULKAN_HPP_NOEXCEPT
    {
      sampleLocationsInfo = sampleLocationsInfo_;
      return *this;
    }

    operator VkAttachmentSampleLocationsEXT const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkAttachmentSampleLocationsEXT*>( this );
    }

    operator VkAttachmentSampleLocationsEXT &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkAttachmentSampleLocationsEXT*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( AttachmentSampleLocationsEXT const& ) const = default;
#else
    bool operator==( AttachmentSampleLocationsEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( attachmentIndex == rhs.attachmentIndex )
          && ( sampleLocationsInfo == rhs.sampleLocationsInfo );
    }

    bool operator!=( AttachmentSampleLocationsEXT const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint32_t attachmentIndex = {};
    VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT sampleLocationsInfo = {};
  };
  static_assert( sizeof( AttachmentSampleLocationsEXT ) == sizeof( VkAttachmentSampleLocationsEXT ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<AttachmentSampleLocationsEXT>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE